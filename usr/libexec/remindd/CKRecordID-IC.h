//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecordID.h>

@class NSString;

@interface CKRecordID (IC)
- (_Bool)ic_isEqual:(id)arg1;	// IMP=0x0020000000048ea1
- (_Bool)ic_isOwnedByCurrentUser;	// IMP=0x0010000000048e5d
- (long long)rd_ckDatabaseScope;	// IMP=0x0010000000048e19
- (id)ic_loggingDescription;	// IMP=0x0010000000048e02
- (id)ic_loggingDescriptionIncludingBrackets:(_Bool)arg1;	// IMP=0x0010000000048bc2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
