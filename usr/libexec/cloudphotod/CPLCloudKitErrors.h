//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CPLCloudKitErrors : NSObject
{
}

+ (_Bool)isContainerHasBeenWipedError:(id)arg1;	// IMP=0x0040000000131736
+ (_Bool)isOperationCancelledOrDeferredError:(id)arg1;	// IMP=0x001000000013169b
+ (_Bool)isCloudKitOperationCancelledError:(id)arg1;	// IMP=0x001000000013154e
+ (_Bool)isFeatureDisabledError:(id)arg1;	// IMP=0x00100000001313c1
+ (_Bool)isRecordNotFoundError:(id)arg1;	// IMP=0x0010000000131334
+ (id)realErrorForError:(id)arg1;	// IMP=0x00100000001310e1
+ (id)errorsPerZoneIDForPartialFailureError:(id)arg1;	// IMP=0x001000000013107d
+ (id);	// IMP=0x0010000000131019
+ (id)_filteredPartialFailureError:(id)arg1 itemClass:(Class)arg2;	// IMP=0x0010000000130d76
+ (_Bool)isPartialFailureError:(id)arg1;	// IMP=0x0010000000130ce9
+ (_Bool)getCloudKitErrorCode:(long long *)arg1 internalCode:(long long *)arg2 fromError:(id)arg3;	// IMP=0x00100000001308c0
+ (id)CPLErrorForCloudKitUploadError:(id)arg1 getDestinationRecordIDs:(CDUnknownBlockType)arg2 scopeProvider:(id)arg3 withRequestUUIDs:(id)arg4 uploadAction:(id)arg5;	// IMP=0x00100000001302ac
+ (id)CPLErrorForCloudKitError:(id)arg1 scopeProvider:(id)arg2 withRequestUUIDs:(id)arg3 description:(id)arg4 arguments:(struct __va_list_tag [1])arg5;	// IMP=0x001000000012f216
+ (id)_errorForCancelledError:(id)arg1;	// IMP=0x001000000012f0a9
+ (id)CPLErrorForCloudKitError:(id)arg1 scopeProvider:(id)arg2 withRequestUUIDs:(id)arg3 description:(id)arg4;	// IMP=0x001000000012effe
+ (id)CPLErrorForCloudKitError:(id)arg1 withRequestUUIDs:(id)arg2 description:(id)arg3 arguments:(struct __va_list_tag [1])arg4;	// IMP=0x001000000012efd4
+ (id)CPLErrorForCloudKitError:(id)arg1 withRequestUUIDs:(id)arg2 description:(id)arg3;	// IMP=0x001000000012ef1a
+ (id)bestErrorForUnderlyingError:(id)arg1;	// IMP=0x001000000012ef06
+ (id)_bestErrorForUnderlyingError:(id)arg1 scopeProvider:(id)arg2;	// IMP=0x001000000012e634
+ (id)_rejectionReasonFromPartialError:(id)arg1 identifier:(id)arg2;	// IMP=0x001000000012e280
+ (id)_betterErrorForRecordId:(id)arg1 recordError:(id)arg2;	// IMP=0x001000000012e08f
+ (_Bool)_isCKErrorForRejectedRecord:(id)arg1;	// IMP=0x001000000012df68

@end

