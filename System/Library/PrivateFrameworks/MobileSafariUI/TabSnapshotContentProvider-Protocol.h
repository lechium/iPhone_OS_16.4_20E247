//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class UIColor, UIImage, UIView;

@protocol TabSnapshotContentProvider <NSObject>

@optional
@property(readonly, nonatomic) _Bool snapshotContentShouldUnderlapTopBackdrop;
@property(readonly, nonatomic) UIColor *snapshotBackgroundColor;
@property(readonly, nonatomic) UIView *snapshotContentView;
@property(readonly, nonatomic) UIImage *snapshotContentImage;
- (_Bool)checkAndResetIfNextSnapshotRequiresScreenUpdates;
- (void)prepareForSnapshotOfSize:(struct CGSize)arg1 completion:(void (^)(_Bool))arg2;
- (struct CGRect)snapshotContentRectInBounds:(struct CGRect)arg1;
@end
