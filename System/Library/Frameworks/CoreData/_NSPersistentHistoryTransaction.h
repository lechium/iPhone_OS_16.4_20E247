//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSPersistentHistoryTransaction.h"

@class NSArray, NSData, NSManagedObjectID, NSPersistentStoreCoordinator, NSString;

__attribute__((visibility("hidden")))
@interface _NSPersistentHistoryTransaction : NSPersistentHistoryTransaction
{
    long long _rowIdentifier;	// 8 = 0x8
    double _timestamp;	// 16 = 0x10
    NSArray *_changes;	// 24 = 0x18
    NSString *_storeID;	// 32 = 0x20
    NSString *_bundleID;	// 40 = 0x28
    NSString *_processID;	// 48 = 0x30
    NSString *_contextName;	// 56 = 0x38
    NSString *_author;	// 64 = 0x40
    NSData *_queryGeneration;	// 72 = 0x48
    NSPersistentStoreCoordinator *_coordinator;	// 80 = 0x50
    NSManagedObjectID *_backingObjectID;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001b473
- (id)objectIDNotification;	// IMP=0x000000000001bb22
- (id)_backingObjectID;	// IMP=0x000000000001bb11
- (id)author;	// IMP=0x000000000001bb00
- (id)contextName;	// IMP=0x000000000001baef
- (id)processID;	// IMP=0x000000000001bade
- (id)bundleID;	// IMP=0x000000000001bacd
- (id)storeID;	// IMP=0x000000000001babc
- (id)postQueryGenerationToken;	// IMP=0x000000000001b9b9
- (id)initialQueryGenerationToken;	// IMP=0x000000000001b8fd
- (id)token;	// IMP=0x000000000001b8a3
- (long long)transactionNumber;	// IMP=0x000000000001b892
- (id)changes;	// IMP=0x000000000001b881
- (id)timestamp;	// IMP=0x000000000001b818
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001b6bc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001b47b
- (void)dealloc;	// IMP=0x000000000001b38a
- (id)initWithDictionary:(id)arg1 andObjectID:(id)arg2;	// IMP=0x000000000001b12a

@end

