//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface LPAssociatedApplicationMetadataFetcher
{
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    NSURL *_URL;	// 40 = 0x28
    NSString *_bundleIdentifier;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000303d0
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)_completedWithClipMetadata:(id)arg1 iconURL:(id)arg2 error:(id)arg3;	// IMP=0x000000000003017d
- (void)_failedWithErrorCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x0000000000030053
- (void)cancel;	// IMP=0x000000000002fff6
- (void)fetchWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002fa9f

@end

