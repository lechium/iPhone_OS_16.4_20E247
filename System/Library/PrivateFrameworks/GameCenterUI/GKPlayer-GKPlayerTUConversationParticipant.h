//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/GKPlayer.h>

@class CNContact;

@interface GKPlayer (GKPlayerTUConversationParticipant)
+ (void)preloadImagesForPlayers:(id)arg1 size:(long long)arg2;	// IMP=0x0020000000147b23
+ (id)monogramQueue;	// IMP=0x0020000000146443
+ (long long)sizeForPhotoSize:(long long)arg1;	// IMP=0x002000000014500a
- (void)setTuParticipant:(id)arg1 forBundleID:(id)arg2;	// IMP=0x00100000001441e8
- (void)setTuParticipant:(id)arg1;	// IMP=0x00100000001441d2
- (id)tuParticipant;	// IMP=0x00100000001441c1
- (id)initWithParticipant:(id)arg1 forBundleID:(id)arg2;	// IMP=0x001000000014411a
- (void)loadPlayerContactForAvatarControllerWithImageSize:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000147b9b
- (void)clearInMemoryCachedAvatars;	// IMP=0x0010000000147996
- (void)_playerAvatarWithSize:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000146e0f
- (void)playerAvatarImageWithSize:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000146d02
- (void)playerAvatarDataWithSize:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000146bf5
- (void)monogramImageWithPhotoSize:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000014649f
- (id)monogramColorIndex;	// IMP=0x001000000014626a
- (void)renderMonogramImageWithPhotoSize:(long long)arg1 monogramString:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000145f0a
- (id)avatarImageRenderer;	// IMP=0x0010000000145e64
- (id)renderingScopeForPhotoSize:(long long)arg1;	// IMP=0x0010000000145b58
- (id)renderingScopeForPhotoSize:(long long)arg1 colorIndex:(long long)arg2;	// IMP=0x00100000001455c5
- (id)placeholderImageWithPhotoSize:(long long)arg1;	// IMP=0x0010000000145416
- (id)stringForMonogram;	// IMP=0x00100000001451b1
- (id)photoURLForSize:(long long)arg1;	// IMP=0x00100000001450db
- (void)showAlertWithTitle:(id)arg1 andMessage:(id)arg2;	// IMP=0x0010000000144e98
- (void)_loadPhotoForSize:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001480d8
- (void)loadPhotoForSize:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000147fab
@property(retain, nonatomic) CNContact *contact;
- (id)initWithContact:(id)arg1;	// IMP=0x00100000001552d8
@end
