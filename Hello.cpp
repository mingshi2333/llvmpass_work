#include <llvm/IR/Function.h>
#include <llvm/IR/PassManager.h>
#include <llvm/Passes/PassBuilder.h>
#include <llvm/Passes/PassPlugin.h>
#include <llvm/Support/raw_ostream.h>

namespace llvm{
    class HelloWorldPass:public PassInfoMixin<HelloWorldPass>{
        public:
            PreservedAnalyses run(Function &F,FunctionAnalysisManager &AM);
            
    };
}

using namespace llvm;
PreservedAnalyses HelloWorldPass::run(Function &F, FunctionAnalysisManager &AM)
{
    errs()<<F.getName()<<"\n";
    return PreservedAnalyses::all();
}