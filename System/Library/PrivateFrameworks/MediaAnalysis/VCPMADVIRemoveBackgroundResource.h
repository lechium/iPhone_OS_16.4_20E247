//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPMADVIRemoveBackgroundCachedImageHandler;

__attribute__((visibility("hidden")))
@interface VCPMADVIRemoveBackgroundResource
{
    _Bool _maskOnly;	// 8 = 0x8
    VCPMADVIRemoveBackgroundCachedImageHandler *_cachedImageHandler;	// 16 = 0x10
}

+ (id)sharedResource;	// IMP=0x0060000000037044
- (void).cxx_destruct;	// IMP=0x0000000000037211
@property(retain, nonatomic) VCPMADVIRemoveBackgroundCachedImageHandler *cachedImageHandler; // @synthesize cachedImageHandler=_cachedImageHandler;
@property(nonatomic) _Bool maskOnly; // @synthesize maskOnly=_maskOnly;
- (void)purge;	// IMP=0x0000000000037182
- (long long)inactiveCost;	// IMP=0x0000000000037149
- (long long)activeCost;	// IMP=0x000000000003710f

@end

