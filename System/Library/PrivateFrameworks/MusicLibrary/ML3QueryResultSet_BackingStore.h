//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ML3QueryResultSet_BackingStore : NSObject
{
    vector_1ee95920 _persistentIDs;	// 8 = 0x8
    struct vector<unsigned char, std::allocator<unsigned char>> _sections;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x0000000000117abd
- (void).cxx_destruct;	// IMP=0x0000000000117a83
- (id)backingStoreByRemovingPersistentIDs:(const void *)arg1;	// IMP=0x00000000001177f8
- (void)reverseEnumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000117656
- (void)enumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001174ac
- (_Bool)containsPersistentIDs:(const void *)arg1;	// IMP=0x0000000000117459
- (void)reverseEnumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001173dd
- (void)enumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000117353
- (long long)persistentIDAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001172fb
@property(readonly, nonatomic) unsigned long long count;

@end

