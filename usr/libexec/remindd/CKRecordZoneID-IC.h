//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecordZoneID.h>

@class NSString;

@interface CKRecordZoneID (IC)
+ (long long)ic_defaultDatabaseScopeForOwnerName:(id)arg1;	// IMP=0x0020000000052b66
- (_Bool)ic_isOwnedByCurrentUser;	// IMP=0x0020000000052d66
- (long long)rd_ckDatabaseScope;	// IMP=0x0010000000052cf3
- (id)ic_loggingDescription;	// IMP=0x0010000000052b8d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
