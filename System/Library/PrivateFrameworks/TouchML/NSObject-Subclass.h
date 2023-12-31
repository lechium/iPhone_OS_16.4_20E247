//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NSObject (Subclass)
+ (_Bool)subclassInstance:(id)arg1;	// IMP=0x00100000000111f6
+ (void)tmlLoadCategory;	// IMP=0x00100000000162a0
+ (_Bool)tmlIsJSObjectClass;	// IMP=0x00100000000397ff
+ (void)tmlMakeJSObjectClass;	// IMP=0x00100000000396db
+ (id)tmlLoadObjectFromPath:(id)arg1;	// IMP=0x0010000000072e22
- (_Bool)tmlIsKindOfClass:(Class)arg1;	// IMP=0x00100000000116b4
- (_Bool)tmlHasSignal:(id)arg1;	// IMP=0x0010000000016263
- (void)removeTMLSignal:(id)arg1;	// IMP=0x00100000000161fc
- (_Bool)emitTMLSignal:(id)arg1 withArguments:(id)arg2 returnValue:(id *)arg3;	// IMP=0x0010000000015fb7
- (_Bool)emitTMLSignal:(id)arg1 withArguments:(id)arg2;	// IMP=0x0010000000015fa2
- (id)tmlSignalHandlerForSignal:(id)arg1;	// IMP=0x0010000000015e21
- (id)tmlGetMethod:(id)arg1;	// IMP=0x0010000000015e0a
- (id)tmlCallMethod:(id)arg1 withArguments:(id)arg2;	// IMP=0x0010000000015d7e
- (_Bool)didEmitSignalOrMethod:(id)arg1 withArguments:(id)arg2 returnValue:(id)arg3 newReturnValue:(id *)arg4;	// IMP=0x0010000000015a51
- (void)willEmitSignalOrMethod:(id)arg1 withArguments:(id)arg2 newArguments:(id *)arg3;	// IMP=0x0010000000015737
- (void)unregisterAspect:(id)arg1;	// IMP=0x0010000000015515
- (void)registerAspect:(id)arg1;	// IMP=0x0010000000015443
- (id)getAspectsForSignalName:(id)arg1 advice:(int)arg2 createStorageIfMissing:(_Bool)arg3;	// IMP=0x001000000001532f
- (id)strongObjectsArray:(id)arg1;	// IMP=0x0010000000015133
- (void)addMetaObject:(id)arg1;	// IMP=0x0010000000015030
- (id)metaObjects;	// IMP=0x001000000001501f
- (id)tmlEmitSignalOrCallMethod:(id)arg1 withArguments:(id)arg2;	// IMP=0x0010000000014e1d
- (id)tmlInvokeMethodCall:(id)arg1 withArguments:(id)arg2;	// IMP=0x0010000000014c18
- (id)tmlGetMethod:(id)arg1 throwIfMissing:(_Bool)arg2;	// IMP=0x0010000000014a0c
- (void)setTMLSignalHandler:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000001489c
- (void)setTMLHandlerBlock:(CDUnknownBlockType)arg1 forSignal:(id)arg2;	// IMP=0x0010000000014881
- (void)setTMLHandler:(id)arg1 forSignal:(id)arg2;	// IMP=0x00100000000146ec
- (void)tmlAddMethod:(id)arg1;	// IMP=0x0010000000014623
- (id)tmlValueForKey:(id)arg1;	// IMP=0x001000000001459d
- (id)tmlValueForKeyPath:(id)arg1;	// IMP=0x001000000001449f
- (void)setTMLValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0010000000014155
- (void)setTMLValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000014143
- (_Bool)hasTMLOwnerContext:(id)arg1;	// IMP=0x00100000000140f5
- (_Bool)setTMLOwnerContext:(id)arg1;	// IMP=0x0010000000014095
- (id)tmlStateForName:(id)arg1;	// IMP=0x0010000000013e4a
@property(copy, nonatomic) NSString *tmlState;
- (id)tmlDefaultState;	// IMP=0x0010000000013bd6
@property(nonatomic) __weak id tmlParent;
@property(readonly, nonatomic) NSArray *tmlChildren;
- (void)addTmlChild:(id)arg1;	// IMP=0x0010000000013ac5
- (void)tmlDispose;	// IMP=0x0010000000013a0c
- (id)tmlClass;	// IMP=0x00100000000139f0
@property(copy, nonatomic) NSString *tmlIdentifier;
- (id)tmlGetValue:(id)arg1;	// IMP=0x0010000000039965
- (id)tmlGetValueProxy:(id)arg1;	// IMP=0x0010000000039909
- (id)tmlInvoke:(id)arg1:(id)arg2;	// IMP=0x0010000000039818
- (void)tmlMakeJSObjectClass;	// IMP=0x00100000000397e5

// Remaining properties
@property(readonly, nonatomic) Class tmlSuperClass; // @dynamic tmlSuperClass;
@end

