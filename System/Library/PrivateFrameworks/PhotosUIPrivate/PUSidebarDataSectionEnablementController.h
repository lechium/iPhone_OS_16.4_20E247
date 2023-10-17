//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString, PHPhotoLibrary, PXSharedLibrarySidebarEnablementObserver;
@protocol PXDataSectionManagerEnabling;

__attribute__((visibility("hidden")))
@interface PUSidebarDataSectionEnablementController : NSObject
{
    _Bool _isPhotosPicker;	// 8 = 0x8
    _Bool _isLimitedLibraryMode;	// 9 = 0x9
    _Bool _excludesHiddenAlbum;	// 10 = 0xa
    _Bool _registeredAsPrefObserver;	// 11 = 0xb
    _Bool _registeredSharedLibraryEnablementObserver;	// 12 = 0xc
    NSMapTable *_sectionManagerByItemTypeForAccountStoreChange;	// 16 = 0x10
    NSMapTable *_sectionManagersByItemTypeForDefaultsChange;	// 24 = 0x18
    PHPhotoLibrary *_photoLibrary;	// 32 = 0x20
    PXSharedLibrarySidebarEnablementObserver *_sharedLibrarySidebarEnablementObserver;	// 40 = 0x28
    NSObject<PXDataSectionManagerEnabling> *_sharedLibraryDataSectionManager;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001562f6
@property(nonatomic) _Bool registeredSharedLibraryEnablementObserver; // @synthesize registeredSharedLibraryEnablementObserver=_registeredSharedLibraryEnablementObserver;
@property(nonatomic) __weak NSObject<PXDataSectionManagerEnabling> *sharedLibraryDataSectionManager; // @synthesize sharedLibraryDataSectionManager=_sharedLibraryDataSectionManager;
@property(readonly, nonatomic) PXSharedLibrarySidebarEnablementObserver *sharedLibrarySidebarEnablementObserver; // @synthesize sharedLibrarySidebarEnablementObserver=_sharedLibrarySidebarEnablementObserver;
@property(nonatomic) _Bool registeredAsPrefObserver; // @synthesize registeredAsPrefObserver=_registeredAsPrefObserver;
@property(readonly, nonatomic) _Bool excludesHiddenAlbum; // @synthesize excludesHiddenAlbum=_excludesHiddenAlbum;
@property(readonly, nonatomic) _Bool isLimitedLibraryMode; // @synthesize isLimitedLibraryMode=_isLimitedLibraryMode;
@property(readonly, nonatomic) _Bool isPhotosPicker; // @synthesize isPhotosPicker=_isPhotosPicker;
@property(readonly, nonatomic) __weak PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) NSMapTable *sectionManagersByItemTypeForDefaultsChange; // @synthesize sectionManagersByItemTypeForDefaultsChange=_sectionManagersByItemTypeForDefaultsChange;
@property(readonly, nonatomic) NSMapTable *sectionManagerByItemTypeForAccountStoreChange; // @synthesize sectionManagerByItemTypeForAccountStoreChange=_sectionManagerByItemTypeForAccountStoreChange;
- (void)preferencesDidChange;	// IMP=0x00000000001561b8
- (void)_accountStoreDidChange:(id)arg1;	// IMP=0x0000000000156114
- (void)_observeDefaultsForManager:(id)arg1 enablementItem:(long long)arg2;	// IMP=0x0000000000156038
- (void)_observeAccountsStoreForManager:(id)arg1 enablementItem:(long long)arg2;	// IMP=0x0000000000155f05
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000155ee8
- (void)_updateSharedLibraryDataSectionManagerEnabledState;	// IMP=0x0000000000155e68
- (void)_configureEnablementOfSectionManager:(id)arg1 enablementItem:(long long)arg2 setupObservation:(_Bool)arg3;	// IMP=0x0000000000155a58
- (void)configureEnablementOfSectionManager:(id)arg1 enablementItem:(long long)arg2;	// IMP=0x0000000000155a40
- (void)dealloc;	// IMP=0x000000000015597a
- (id)initWithPhotoLibrary:(id)arg1 isPhotosPicker:(_Bool)arg2 isLimitedLibraryMode:(_Bool)arg3 excludesHiddenAlbum:(_Bool)arg4;	// IMP=0x0000000000155885

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
