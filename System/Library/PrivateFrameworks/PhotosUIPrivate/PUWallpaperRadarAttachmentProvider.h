//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHAsset, PHSuggestion;

__attribute__((visibility("hidden")))
@interface PUWallpaperRadarAttachmentProvider : NSObject
{
    PHSuggestion *_suggestion;	// 8 = 0x8
    PHAsset *_asset;	// 16 = 0x10
}

+ (id)radarConfigurationForAsset:(id)arg1 suggestion:(id)arg2 layerStack:(id)arg3 segmentationItem:(id)arg4 posterDescriptor:(id)arg5 posterConfiguration:(id)arg6 component:(long long)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x00100000004b90cf
+ (id)generateDebugDescriptionForSuggestion:(id)arg1;	// IMP=0x00100000004b8da6
- (void).cxx_destruct;	// IMP=0x00000000004b8d7e
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) PHSuggestion *suggestion; // @synthesize suggestion=_suggestion;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;	// IMP=0x00000000004b8cad
- (id)initWithSuggestion:(id)arg1 asset:(id)arg2;	// IMP=0x00000000004b8c14

@end

