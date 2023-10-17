//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSISEngine;

@interface NSISLinearExpression : NSObject
{
    NSISEngine *engine;	// 8 = 0x8
    CDStruct_9ac54d62 linExp;	// 16 = 0x10
}

+ (id)acquireFromPoolForUseCase:(long long)arg1 engine:(id)arg2;	// IMP=0x00100000000207ea
+ (id)acquireFromPoolForUseCase:(long long)arg1;	// IMP=0x0010000000020788
+ (id)newExpressionWithCapacity:(unsigned long long)arg1 engine:(id)arg2;	// IMP=0x00100000000204a4
+ (id)newExpressionWithCapacity:(unsigned long long)arg1;	// IMP=0x0010000000020442
+ (void)initialize;	// IMP=0x001000000001c941
- (id)copyContentsAndReturnToPool;	// IMP=0x0000000000020606
- (void)returnToPool;	// IMP=0x0000000000020574
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000002052f
- (void)verifyInternalIntegrity;	// IMP=0x000000000002014c
- (void)scaleBy:(double)arg1;	// IMP=0x0000000000020137
- (id)variablesArray;	// IMP=0x000000000001ff06
- (unsigned long long)variableCount;	// IMP=0x000000000001fefd
- (_Bool)enumerateVariablesAndCoefficientsUntil:(CDUnknownBlockType)arg1;	// IMP=0x000000000001fe6b
- (void)enumerateVariables:(CDUnknownBlockType)arg1;	// IMP=0x000000000001fccc
- (void)enumerateVariablesAndCoefficients:(CDUnknownBlockType)arg1;	// IMP=0x000000000001fc43
- (id)description;	// IMP=0x000000000001fbc0
- (void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(CDUnknownBlockType)arg3 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg4;	// IMP=0x000000000001f7ad
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2 timesVariable:(id)arg3 processVariableNewToReceiver:(CDUnknownBlockType)arg4 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg5;	// IMP=0x000000000001f476
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2;	// IMP=0x000000000001f319
- (_Bool)isConstant;	// IMP=0x000000000001f2e6
@property double constant;
- (double)incrementConstant:(double)arg1;	// IMP=0x000000000001f2b5
- (void)addVariable:(id)arg1 coefficient:(double)arg2 processVariableNewToReceiver:(CDUnknownBlockType)arg3 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg4;	// IMP=0x000000000001f030
- (void)addVariable:(id)arg1 coefficient:(double)arg2;	// IMP=0x000000000001ec73
- (void)addExpression:(id)arg1 times:(double)arg2 processVariableNewToReceiver:(CDUnknownBlockType)arg3 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg4;	// IMP=0x000000000001e818
- (void)addExpression:(id)arg1 times:(double)arg2;	// IMP=0x000000000001e71e
- (void)dealloc;	// IMP=0x000000000001dc80
- (void)replaceVariable:(id)arg1 withVariable:(id)arg2 coefficient:(double)arg3;	// IMP=0x000000000001da59
- (void)setCoefficient:(double)arg1 forVariable:(id)arg2;	// IMP=0x000000000001d6c3
- (double)coefficientForVariable:(id)arg1;	// IMP=0x000000000001d292
- (void)removeVariable:(id)arg1;	// IMP=0x000000000001d09c
@property(readonly) NSISEngine *engine;
- (unsigned long long)hash;	// IMP=0x000000000001ccb3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001cba2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001cb51
- (id)initWithEngine:(id)arg1;	// IMP=0x000000000001ca3f
- (id)init;	// IMP=0x000000000001c9dd

@end
