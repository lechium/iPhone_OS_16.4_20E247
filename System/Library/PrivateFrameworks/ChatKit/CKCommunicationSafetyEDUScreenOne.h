//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKComposition, NSArray, NSIndexPath, NSSet;
@protocol CKCommunicationSafetyEDUScreenProtocol;

__attribute__((visibility("hidden")))
@interface CKCommunicationSafetyEDUScreenOne
{
    _Bool _isYoungAgeGroup;	// 8 = 0x8
    _Bool _isSending;	// 9 = 0x9
    id <CKCommunicationSafetyEDUScreenProtocol> _delegate;	// 16 = 0x10
    NSIndexPath *_indexPath;	// 24 = 0x18
    CKComposition *_composition;	// 32 = 0x20
    NSSet *_sensitiveMediaObjects;	// 40 = 0x28
    NSArray *_identifiersOfShelvedImages;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000005149fb
@property(readonly, nonatomic) NSArray *identifiersOfShelvedImages; // @synthesize identifiersOfShelvedImages=_identifiersOfShelvedImages;
@property(readonly, nonatomic) NSSet *sensitiveMediaObjects; // @synthesize sensitiveMediaObjects=_sensitiveMediaObjects;
@property(readonly, nonatomic) CKComposition *composition; // @synthesize composition=_composition;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) _Bool isSending; // @synthesize isSending=_isSending;
@property(readonly, nonatomic) _Bool isYoungAgeGroup; // @synthesize isYoungAgeGroup=_isYoungAgeGroup;
@property(nonatomic) __weak id <CKCommunicationSafetyEDUScreenProtocol> delegate; // @synthesize delegate=_delegate;
- (void)_notNowButtonPressed;	// IMP=0x00000000005148a0
- (void)_acceptButtonPressed;	// IMP=0x0000000000514741
- (void)_messageButtonPressed;	// IMP=0x00000000005146c5
- (void)addButtonsToTray;	// IMP=0x00000000005144f5
- (void)configureFirstReceiveScreen;	// IMP=0x00000000005141d3
- (void)configureFirstSendScreen;	// IMP=0x0000000000513eb1
- (id)initFirstSendingEDUScreenWithComposition:(id)arg1 withSensitiveMediaObjects:(id)arg2 withIdentifiersOfShelvedImages:(id)arg3;	// IMP=0x0000000000513cf2
- (id)initFirstReceivingEDUScreenWithItemIndexPath:(id)arg1;	// IMP=0x0000000000513bb5

@end
