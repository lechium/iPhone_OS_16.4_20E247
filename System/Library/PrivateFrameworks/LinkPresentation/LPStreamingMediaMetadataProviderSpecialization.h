//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetImageGenerator, LPLinkMetadata, LPMediaAssetFetcher;

__attribute__((visibility("hidden")))
@interface LPStreamingMediaMetadataProviderSpecialization
{
    _Bool _cancelled;	// 8 = 0x8
    LPMediaAssetFetcher *_fetcher;	// 16 = 0x10
    AVAssetImageGenerator *_videoImageGenerator;	// 24 = 0x18
    LPLinkMetadata *_metadata;	// 32 = 0x20
}

+ (id)specializedMetadataProviderForResourceWithContext:(id)arg1;	// IMP=0x00600000000084d5
+ (unsigned long long)specialization;	// IMP=0x00600000000084ca
- (void).cxx_destruct;	// IMP=0x000000000000905f
- (void)done;	// IMP=0x0000000000009008
- (void)fail;	// IMP=0x0000000000008fad
- (void)cancel;	// IMP=0x0000000000008f61
- (void)start;	// IMP=0x0000000000008572

@end

