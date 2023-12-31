//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (CKSQLiteErrorTesting)
+ (id)CKErrorFromErrno;	// IMP=0x00200000000b10a0
+ (id)CKErrorWithPOSIXCode:(int)arg1;	// IMP=0x00200000000b0fa7
- (_Bool)CK_isCKSQLiteError;	// IMP=0x001000000008fda5
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;	// IMP=0x00100000000b113e
- (_Bool)CKIsPOSIXErrorCode:(long long)arg1;	// IMP=0x00100000000b10ca
- (void)CKAssignToContainerWithID:(id)arg1;	// IMP=0x00100000000b349e
- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00100000001b9139
@property(readonly, nonatomic, getter=isComparisonError) _Bool comparisonError;
- (id)CKErrorScopedToZoneIDs:(id)arg1;	// IMP=0x001000000020a6b8
- (_Bool)CKHasTopLevelUnderlyingError;	// IMP=0x001000000020a5a1
- (_Bool)CKHasCKErrorInChildChain;	// IMP=0x001000000020a510
- (_Bool)CKIsCKError;	// IMP=0x001000000020a479
- (_Bool)CKIsObjectNotFoundError;	// IMP=0x001000000020a407
- (_Bool)CKIsNotFoundError;	// IMP=0x001000000020a348
- (id)CKClientSuitableErrorSpecificUserInfo;	// IMP=0x001000000020a268
- (id)CKClientSuitableUnderlyingError;	// IMP=0x001000000020a019
- (id)CKClientSuitableError;	// IMP=0x00100000002097fc
@end

