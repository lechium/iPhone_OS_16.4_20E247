//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSAtomicStore.h>

__attribute__((visibility("hidden")))
@interface VSSubscriptionPropertyListStore : NSAtomicStore
{
}

+ (_Bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id *)arg3;	// IMP=0x0080000000072094
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x0080000000072044
- (id)type;	// IMP=0x00000000000720e4
- (id)newReferenceObjectForManagedObject:(id)arg1;	// IMP=0x0000000000071eec
- (void)updateCacheNode:(id)arg1 fromManagedObject:(id)arg2;	// IMP=0x0000000000071d73
- (id)newCacheNodeForManagedObject:(id)arg1;	// IMP=0x0000000000071c9b
- (_Bool)save:(id *)arg1;	// IMP=0x0000000000071668
- (_Bool)load:(id *)arg1;	// IMP=0x000000000007107d
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;	// IMP=0x0000000000070f99

@end

