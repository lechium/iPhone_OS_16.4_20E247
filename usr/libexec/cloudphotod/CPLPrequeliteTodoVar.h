//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLPrequeliteVariable, NSData;
@protocol PQLInjecting;

@interface CPLPrequeliteTodoVar
{
    NSData *_setHasCompletedGenerationSQL;	// 8 = 0x8
    id <PQLInjecting> _hasSomethingTodoConstantInjection;	// 16 = 0x10
    NSData *_hasSomethingTodoSQL;	// 24 = 0x18
    id <PQLInjecting> _setHasSomethingTodo;	// 32 = 0x20
    CPLPrequeliteVariable *_currentGenerationVar;	// 40 = 0x28
    CPLPrequeliteVariable *_targetGenerationVar;	// 48 = 0x30
    CPLPrequeliteVariable *_lastCompletionDateVar;	// 56 = 0x38
    CPLPrequeliteVariable *_expirationIntervalVar;	// 64 = 0x40
}

+ (id)todoVariableWithName:(id)arg1 defaultExpirationInterval:(double)arg2;	// IMP=0x004000000007a0bc
+ (id)todoVariableWithName:(id)arg1;	// IMP=0x001000000007a0a7
- (void).cxx_destruct;	// IMP=0x002000000007ac79
@property(readonly, nonatomic) CPLPrequeliteVariable *expirationIntervalVar; // @synthesize expirationIntervalVar=_expirationIntervalVar;
@property(readonly, nonatomic) CPLPrequeliteVariable *lastCompletionDateVar; // @synthesize lastCompletionDateVar=_lastCompletionDateVar;
@property(readonly, nonatomic) CPLPrequeliteVariable *targetGenerationVar; // @synthesize targetGenerationVar=_targetGenerationVar;
@property(readonly, nonatomic) CPLPrequeliteVariable *currentGenerationVar; // @synthesize currentGenerationVar=_currentGenerationVar;
@property(readonly, nonatomic) id <PQLInjecting> setHasSomethingTodo; // @synthesize setHasSomethingTodo=_setHasSomethingTodo;
- (id)setHasCompletedGeneration:(long long)arg1 now:(id)arg2;	// IMP=0x001000000007ab6c
- (id)hasSomethingTodoNow:(id)arg1;	// IMP=0x001000000007aad8
- (id)setHasCompletedGeneration:(long long)arg1;	// IMP=0x001000000007aa6d
@property(readonly, nonatomic) id <PQLInjecting> hasSomethingTodo;
- (id)initWithName:(id)arg1 defaultExpirationInterval:(double)arg2;	// IMP=0x001000000007a117

@end

