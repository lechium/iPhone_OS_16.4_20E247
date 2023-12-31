//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXSettings.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUWallpaperShortcutsPlaygroundSettings : PXSettings
{
    _Bool _useAssetURL;	// 8 = 0x8
    _Bool _smartCropEnabled;	// 9 = 0x9
    _Bool _previewEnabled;	// 10 = 0xa
    NSString *_selectedConfigurationUUID;	// 16 = 0x10
    NSString *_selectedAssetIdentifier;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x001000000019f77f
+ (void)_runActionWithModuleController:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x001000000004555b
+ (id)settingsControllerModule;	// IMP=0x0010000000044f28
- (void).cxx_destruct;	// IMP=0x000000000019f74e
@property(nonatomic) _Bool previewEnabled; // @synthesize previewEnabled=_previewEnabled;
@property(nonatomic) _Bool smartCropEnabled; // @synthesize smartCropEnabled=_smartCropEnabled;
@property(nonatomic) _Bool useAssetURL; // @synthesize useAssetURL=_useAssetURL;
@property(retain, nonatomic) NSString *selectedAssetIdentifier; // @synthesize selectedAssetIdentifier=_selectedAssetIdentifier;
@property(retain, nonatomic) NSString *selectedConfigurationUUID; // @synthesize selectedConfigurationUUID=_selectedConfigurationUUID;
- (void)setDefaultValues;	// IMP=0x000000000019f61a
- (id)parentSettings;	// IMP=0x000000000019f601
- (void)_handleLoadFileURL:(id)arg1;	// IMP=0x0000000000044d5a
- (void)picker:(id)arg1 didFinishPicking:(id)arg2;	// IMP=0x0000000000044b62

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

