//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PXImportItemViewModel, UIActivityIndicatorView;
@protocol PUImportOneUpScrubberCellDisplayDelegate;

__attribute__((visibility("hidden")))
@interface PUImportOneUpScrubberCell
{
    _Bool _selectable;	// 8 = 0x8
    _Bool _needsBadgeUpdate;	// 9 = 0x9
    id <PUImportOneUpScrubberCellDisplayDelegate> _displayDelegate;	// 16 = 0x10
    PXImportItemViewModel *_importItem;	// 24 = 0x18
    long long _badgeType;	// 32 = 0x20
    UIActivityIndicatorView *_spinner;	// 40 = 0x28
    long long _thumbnailRequestID;	// 48 = 0x30
}

+ (id)emptyThumbnailBackgroundColor;	// IMP=0x00100000001f11aa
- (void).cxx_destruct;	// IMP=0x00000000001f109a
@property(nonatomic) long long thumbnailRequestID; // @synthesize thumbnailRequestID=_thumbnailRequestID;
@property(nonatomic) _Bool needsBadgeUpdate; // @synthesize needsBadgeUpdate=_needsBadgeUpdate;
@property(readonly, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) _Bool selectable; // @synthesize selectable=_selectable;
@property(nonatomic) long long badgeType; // @synthesize badgeType=_badgeType;
@property(retain, nonatomic) PXImportItemViewModel *importItem; // @synthesize importItem=_importItem;
@property(nonatomic) __weak id <PUImportOneUpScrubberCellDisplayDelegate> displayDelegate; // @synthesize displayDelegate=_displayDelegate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000001f0e1d
- (void)_createSpinnerIfNecessary;	// IMP=0x00000000001f0cd4
- (void)updateToThumbnail:(id)arg1;	// IMP=0x00000000001f0c32
- (void)refreshThumbnail;	// IMP=0x00000000001f0a60
- (void)updateBadgeUIIfNeeded;	// IMP=0x00000000001f08cd
- (void)prepareForReuse;	// IMP=0x00000000001f06c5
- (void)layoutSubviews;	// IMP=0x00000000001f0621
- (void)dealloc;	// IMP=0x00000000001f0567
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001f0509
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001f049a
- (void)_commonPUImportOneUpScrubberCellInitialization;	// IMP=0x00000000001f0459

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

