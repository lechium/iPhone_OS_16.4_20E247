//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RMMDMv1Liaison : NSObject
{
}

+ (void)refreshState;	// IMP=0x002000000005abc9
+ (void)_didEnroll:(_Bool)arg1;	// IMP=0x001000000005aaa8
+ (void)remoteManagementDidUnenroll;	// IMP=0x001000000005aa94
+ (void)remoteManagementDidEnroll;	// IMP=0x001000000005aa7d
+ (_Bool)isEnrollmentInMDMv1Restricted;	// IMP=0x001000000005aa24
+ (_Bool)isEnrolledInMDMv1;	// IMP=0x001000000005a9ba

@end
