//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ICCloudSchemaCatchUpSyncContext : NSObject
{
    _Bool _isCloudSchemaCatchUpSyncNeeded;	// 8 = 0x8
    _Bool _shouldPerformCloudSchemaCatchUpSync;	// 9 = 0x9
    NSString *_accountIdentifier;	// 16 = 0x10
    long long _persistenceCloudSchemaVersion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000557c2
@property(nonatomic) long long persistenceCloudSchemaVersion; // @synthesize persistenceCloudSchemaVersion=_persistenceCloudSchemaVersion;
@property(nonatomic) _Bool shouldPerformCloudSchemaCatchUpSync; // @synthesize shouldPerformCloudSchemaCatchUpSync=_shouldPerformCloudSchemaCatchUpSync;
@property(nonatomic) _Bool isCloudSchemaCatchUpSyncNeeded; // @synthesize isCloudSchemaCatchUpSyncNeeded=_isCloudSchemaCatchUpSyncNeeded;
@property(retain, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (void)_computeShouldPerformCloudSchemaCatchUpSyncFrom:(id)arg1 storeController:(id)arg2;	// IMP=0x00100000000555a0
- (id)initWithAccountIdentifier:(id)arg1 schedulingStateStorage:(id)arg2 managedObjectContext:(id)arg3;	// IMP=0x001000000005542b

@end
