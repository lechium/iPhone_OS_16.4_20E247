//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL, SFAirDropAction;

@interface SDAirDropHandleriCloudDrive
{
    NSURL *_iCloudDriveURL;	// 8 = 0x8
    SFAirDropAction *_action;	// 16 = 0x10
    _Bool _useOpenWithText;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000073e67
@property(nonatomic) _Bool useOpenWithText; // @synthesize useOpenWithText=_useOpenWithText;
- (void)saveCompletedItemsToiCloudDrive;	// IMP=0x00100000000736af
- (void)openCompletedItemsWithFilesApp;	// IMP=0x00100000000730f2
@property(readonly, nonatomic) SFAirDropAction *action;
- (void)updatePossibleActions;	// IMP=0x0010000000072dcd
- (id)cancelActionTitleToAccompanyActions:(id)arg1;	// IMP=0x0010000000072dbc
- (id)suitableContentsDescription;	// IMP=0x0010000000072dab
- (long long)transferTypes;	// IMP=0x0010000000072d76
- (_Bool)canHandleTransfer;	// IMP=0x0010000000072c25
- (id)initWithTransfer:(id)arg1;	// IMP=0x0010000000072b5e

@end

