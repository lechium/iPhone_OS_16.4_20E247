//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKHealthRecordsStore, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface WDClinicalSourcesDataProviderSafariDelegate : NSObject
{
    HKHealthRecordsStore *_healthRecordsStore;	// 8 = 0x8
    NSURL *_loginURL;	// 16 = 0x10
}

+ (id)sharedSafariDelegate;	// IMP=0x0010000000032b8c
- (void).cxx_destruct;	// IMP=0x0000000000032d9a
@property(retain, nonatomic) NSURL *loginURL; // @synthesize loginURL=_loginURL;
@property(retain, nonatomic) HKHealthRecordsStore *healthRecordsStore; // @synthesize healthRecordsStore=_healthRecordsStore;
- (id)safariViewController:(id)arg1 excludedActivityTypesForURL:(id)arg2 title:(id)arg3;	// IMP=0x0000000000032c6e
- (void)safariViewControllerDidFinish:(id)arg1;	// IMP=0x0000000000032bf1
- (id)init;	// IMP=0x0000000000032b12
- (id)_init;	// IMP=0x0000000000032ae3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
