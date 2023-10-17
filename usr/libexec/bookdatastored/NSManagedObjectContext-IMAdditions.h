//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObjectContext.h>

@interface NSManagedObjectContext (IMAdditions)
+ (id)mergePredicate:(id)arg1 andPredicate:(id)arg2;	// IMP=0x002000000000cc66
- (_Bool)im_isPerformingSafeAccess;	// IMP=0x001000000000da5c
- (void)im_performSafeAccess:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d8b2
- (void)im_popSafeAccessState;	// IMP=0x001000000000d8ac
- (void)im_pushSafeAccessState;	// IMP=0x001000000000d8a6
- (id)entity:(id)arg1 withPredicate:(id)arg2;	// IMP=0x001000000000d87d
- (id)entity:(id)arg1 withPredicate:(id)arg2 sortBy:(id)arg3 ascending:(_Bool)arg4 fetchLimit:(unsigned long long)arg5;	// IMP=0x001000000000d861
- (id)entity:(id)arg1 withPredicate:(id)arg2 sortBy:(id)arg3 ascending:(_Bool)arg4 fetchLimit:(unsigned long long)arg5 prefetchRelationships:(id)arg6;	// IMP=0x001000000000d72f
- (id)entity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3 fetchLimit:(unsigned long long)arg4 prefetchRelationships:(id)arg5;	// IMP=0x001000000000d55b
- (id)unbatchedObjectsWithPredicate:(id)arg1 forEntity:(id)arg2;	// IMP=0x001000000000d423
- (id)objectIDsWithPredicate:(id)arg1 forEntity:(id)arg2;	// IMP=0x001000000000d2dc
- (id)newByClass:(Class)arg1;	// IMP=0x001000000000d27d
- (id)copyEntityProperty:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3;	// IMP=0x001000000000d1d5
- (id)copyEntityPropertyArray:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3 sortBy:(id)arg4 ascending:(_Bool)arg5;	// IMP=0x001000000000d10e
- (id)copyEntityPropertiesArray:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3 sortBy:(id)arg4 ascending:(_Bool)arg5;	// IMP=0x001000000000d0f0
- (id)copyEntityPropertiesArray:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3 sortBy:(id)arg4 ascending:(_Bool)arg5 distinct:(_Bool)arg6;	// IMP=0x001000000000ce51
- (unsigned long long)countEntity:(id)arg1 withPredicate:(id)arg2;	// IMP=0x001000000000cd23
- (void)batchDeleteEntity:(id)arg1 matching:(id)arg2 prefetchRelationships:(id)arg3;	// IMP=0x001000000000da64
@end
