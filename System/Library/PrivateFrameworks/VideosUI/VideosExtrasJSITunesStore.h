//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSITunesStore.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface VideosExtrasJSITunesStore : IKJSITunesStore
{
    UIViewController *_formPresentationViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000016b9fc
@property(nonatomic) __weak UIViewController *formPresentationViewController; // @synthesize formPresentationViewController=_formPresentationViewController;
- (void)loadStoreURL:(id)arg1 playOnLaunch:(id)arg2;	// IMP=0x000000000016b7d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

