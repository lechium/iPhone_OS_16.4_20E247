//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueGetter, NSKeyValueMutatingCollectionMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableCollection2Getter
{
    NSKeyValueGetter *_baseGetter;	// 88 = 0x58
    NSKeyValueMutatingCollectionMethodSet *_mutatingMethods;	// 96 = 0x60
}

- (id)mutatingMethods;	// IMP=0x0000000000454224
- (id)baseGetter;	// IMP=0x0000000000454213
- (void)dealloc;	// IMP=0x0000000000454198
- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 baseGetter:(id)arg3 mutatingMethods:(id)arg4 proxyClass:(Class)arg5;	// IMP=0x00000000004540fa

@end
