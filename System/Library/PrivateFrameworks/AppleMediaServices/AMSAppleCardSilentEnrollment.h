//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSAppleCardSilentEnrollment : NSObject
{
}

+ (id)bagKeySet;	// IMP=0x0010000000164ba3
+ (id)createBagForSubProfile;	// IMP=0x0010000000164b09
+ (id)bagSubProfileVersion;	// IMP=0x0010000000164ab9
+ (id)bagSubProfile;	// IMP=0x0010000000164a69
+ (id)headersForAccount:(id)arg1;	// IMP=0x00100000001646ba
+ (id)gsTokenForAccount:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001643bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
