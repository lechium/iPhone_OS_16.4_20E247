//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LSBundleProxy, NSString, SFAirDropTransfer;

@interface SDAirDropHandler : NSObject
{
    _Bool _hasFiles;	// 8 = 0x8
    _Bool _hasLinks;	// 9 = 0x9
    _Bool _isActivated;	// 10 = 0xa
    _Bool _handlingAppInstalled;	// 11 = 0xb
    SFAirDropTransfer *_transfer;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    LSBundleProxy *_bundleProxy;	// 32 = 0x20
    NSString *_handlingAppBundleID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000090b2
@property(retain, nonatomic) NSString *handlingAppBundleID; // @synthesize handlingAppBundleID=_handlingAppBundleID;
@property(nonatomic) _Bool handlingAppInstalled; // @synthesize handlingAppInstalled=_handlingAppInstalled;
@property(retain, nonatomic) LSBundleProxy *bundleProxy; // @synthesize bundleProxy=_bundleProxy;
@property(nonatomic) _Bool isActivated; // @synthesize isActivated=_isActivated;
@property(readonly, nonatomic) _Bool hasLinks; // @synthesize hasLinks=_hasLinks;
@property(readonly, nonatomic) _Bool hasFiles; // @synthesize hasFiles=_hasFiles;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) SFAirDropTransfer *transfer; // @synthesize transfer=_transfer;
- (_Bool)openURLs:(id)arg1;	// IMP=0x0010000000008ffe
- (_Bool)openURLs:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x001000000000890d
- (void)removeItemAtURLToFreeUpSpace:(id)arg1;	// IMP=0x001000000000883d
- (void)logReceiverBundleID:(id)arg1 forAppProxy:(id)arg2 andURL:(id)arg3;	// IMP=0x001000000000865f
@property(readonly, copy, nonatomic) NSString *senderName;
- (id)bundleProxyFromCandidateIdentifiers:(id)arg1 handlesURL:(id)arg2;	// IMP=0x001000000000825c
- (id)alertMessageLocalizedKeyForTypeDicts:(id)arg1;	// IMP=0x0010000000007dcb
@property(readonly, nonatomic) unsigned long long totalSharedItemsCount;
@property(readonly, nonatomic) _Bool isJustLinks;
@property(readonly, nonatomic) _Bool isJustFiles;
- (id)applicationProxyForBundleProxy:(id)arg1;	// IMP=0x0010000000007bad
- (id)defaultActionForBundleProxy:(id)arg1;	// IMP=0x0010000000007a33
- (void)prepareForAccept;	// IMP=0x0010000000007a2d
- (void)prepareOrPerformOpenAction;	// IMP=0x0010000000007712
- (void)updatePossibleActions;	// IMP=0x0010000000007173
- (id)cancelActionTitleToAccompanyActions:(id)arg1;	// IMP=0x00100000000070ff
@property(readonly, copy, nonatomic) NSString *singleItemActionTitle;
@property(readonly, nonatomic) NSString *suitableContentsDescription;
@property(readonly, nonatomic) NSString *suitableContentsTitle;
- (long long)transferTypes;	// IMP=0x00100000000070b3
@property(readonly, nonatomic) _Bool canHandleTransfer;
- (void)lockStatusChanged:(id)arg1;	// IMP=0x0010000000007099
- (void)removeStatusMonitorObservers;	// IMP=0x0010000000007046
- (void)addStatusMonitorObservers;	// IMP=0x0010000000006fdf
- (void)triggerSelectedActionIfAppropriate;	// IMP=0x0010000000006c07
- (void)actionSelected:(id)arg1;	// IMP=0x0010000000006796
- (void)transferUpdated;	// IMP=0x0010000000006567
- (id)description;	// IMP=0x001000000000642d
- (void)activate;	// IMP=0x0010000000006386
- (void)dealloc;	// IMP=0x0010000000006334
- (id)initWithTransfer:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0010000000006074
- (id)initWithTransfer:(id)arg1;	// IMP=0x0010000000006060
- (id)init;	// IMP=0x0010000000005fb8

@end

