//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSPersistentContainer.h>

@interface DMDConfigurationDatabase : NSPersistentContainer
{
}

+ (id)_newDatabaseWithURL:(id)arg1;	// IMP=0x004000000002d28d
+ (id)newUserDatabase;	// IMP=0x001000000002d233
+ (id)descriptionForSQLiteStoreWithDatabaseURL:(id)arg1;	// IMP=0x001000000002d1c2
+ (id)managedObjectModel;	// IMP=0x001000000002cf04
- (void)performBackgroundTask:(CDUnknownBlockType)arg1;	// IMP=0x004000000002d3e9
- (id)init;	// IMP=0x001000000002d367
- (id)description;	// IMP=0x001000000002cfe7

@end

