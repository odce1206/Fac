#include "globals.h"
#include "symtab.h"
#include "code.h"
#include "cgen.h"

static int tmpOffset = 0;

static void cGen (TreeNode * tree);

static void genStmt(TreeNode * tree){
    TreeNode * p1 * p2 * p3;
    int savedLoc1,savedLoc2,currentLoc;
    int loc;
    switch (tree->kind.stmt){
        case IfK:
            if (TraceCode) emitComment("-> if");
            p1 = tree->child[0];
            p2 = tree->child[1];
            p3 = tree->child[2];
            cgen(p1);
            savedLoc = emitSkip(1);
            emitComment("if: jump to else belongs here");
            cGen(p2);
            savedLoc = emitSkip(1);
            emitComment("if: jump to end belongs here");
            currentLoc = emitSkip(0);
            emitBackup(savedLoc1);
            emitRm_Abs("JEQ"ac,currentLoc,"if: jmp to else");
            emitRestore();
            cGen(p3);
            currentLoc = emitSkip(0);
            emitBackup(savedLoc2);
            emitRM_Abs("LDA",pc,currentLoc,"jmp to end");
            emitRestore();
            if (TraceCode) emit comment("<- if");
            break;

        case RepeatK:
            if (TraceCode) emitComment("-> repeat");
            p1 = tree->child[0];
            p2 = tree->child[1];
            savedLoc1 = emitSkip(0);
            emitComment("repeat: jump after body comes back here");
            cGen(p1);
            cGen(p2);
            emitRM_Abs("JEQ",ac,savedLoc1,"repeat: jmp jack to body");
            if (TraceCode) emitComment("<- assign");
            break;

            //case assign
        case AssignK:
            if (TraceCode) emitComment("-> assign");
            cGen(tree->child[0]);
            loc = st_lookup(tree->attr.name);
            emitRM("ST",ac,loc,gp,"asssign: store value");
            if (TraceCode) emitComment("<- assing");
            break;

        case ReadK:
            emitRO("IN",ac,0,0,"read integer value");
            loc = st_lookup(tree->attr.name);
            emitRM("OUT",ac,0,0,"write ac");

        default:
            break;
    }
}

{
    int loc;
    TreeNode * p1, * p2;
    switch (tree->kind.exp) {
        case ConstK:
            if (TraceCode) emitComment ("-> Const");
            emitRM("LDC",ac,tree->attr.val,0,"load const");
            if (TraceCode) emitComment("<- Const");
            break;

        case IdK:
            if (TraceCode) emitComment("-> Id");
            loc = st_lookup(tree->attr.name);
            emitRM("LD",ac,loc,gp,"load id value");
            if (TraceCode) emitComment("<- Id");
            break;

        case OpK:
            if (TraceCode) emitComment("-> Op");
            p1 = tree->child[0];
            p2 = tree->child[1];
            cGen(p1);
            emitRM("ST",ac,tmpOffset--,mp,"op: push left");
            cGen(p2);
            emitRM("LD",ac1,++tmpOffset,mp,"op: load left");
            switch (tree->attr.op) {
                case PLUS:
                    emitRO("ADD",ac,ac1,ac,"op +");
                    break;
                case MINUS:
                    emitRO("SUB",ac,ac1,ac,"op -");
                    break;
                case TIMES:
                    emitRO("MUL",ac,ac1,ac,"op *");
                    break;
                case OVER:
                    emitRO("DIV",ac,ac1,ac,"op /");
                    break;
                case LT:
                    emitRO("SUB",ac,ac1,ac,"op <");
                    emitRM("JLT",ac,2,pc,"br if true");
                    emitRM("LDC",ac,0,ac,"false case");
                    emitRM("LDA",pc,1,pc,"unconditional jmp");
                    emitRM("LDC",ac,1,ac,"true case");
                    break;
                case EQ:
                    emitRO("SUB",ac,ac1,ac,"op ==");
                    emitRM("JEQ"ac,2,pc,"br if turue");
                    emitRM("LDC",ac,0,ac,"false case");
                    emitRM("LDA",pc,1,pc,"unconditional jmp");
                    emitRM("LDC",ac,1,ac,"true case");
                    break;
                default:
                    emitComment("BUG: Unknown operator");
                    break;
            }
            if (TraceCode) emitComment("<- Op");
            break;
    }
}

static void cGen(TreeNode * tree){
    if (tree != NULL){
        switch (tree->nodeKind) {
            case StmtK:
                genStmt(tree);
                break;
            case ExpK:
                genExp(tree);
                break;
            default:
                break;
        }
        cGen(tree->sibling);
    }
}
