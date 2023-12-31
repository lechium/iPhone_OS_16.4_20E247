//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class QLPreviewController, UIImage, UIView;

__attribute__((visibility("hidden")))
@interface QLTransitionContext : NSObject
{
    QLPreviewController *_previewController;	// 8 = 0x8
    UIImage *_sourceViewSnapshotImage;	// 16 = 0x10
    _Bool _contextPreparedToSend;	// 24 = 0x18
    _Bool _isSourceTransformed;	// 25 = 0x19
    _Bool _usingViewForZoomTransition;	// 26 = 0x1a
    UIView *_sourceView;	// 32 = 0x20
    UIView *_sourceViewSnapshot;	// 40 = 0x28
    double _topNavigationOffset;	// 48 = 0x30
    double _hostNavigationOffset;	// 56 = 0x38
    struct CGPoint _sourceCenter;	// 64 = 0x40
    struct CGSize _previewItemSize;	// 80 = 0x50
    struct CGRect _sourceFrame;	// 96 = 0x60
    struct CGRect _sourceBounds;	// 128 = 0x80
    struct CGRect _uncroppedFrame;	// 160 = 0xa0
    struct CGAffineTransform _sourceTransform;	// 192 = 0xc0
}

+ (id)firstChildNavigationControllerFromViewController:(id)arg1;	// IMP=0x0010000000030240
+ (_Bool)useViewTransitionForPreviewController:(id)arg1;	// IMP=0x0010000000030166
+ (_Bool)useImageTransitionForPreviewController:(id)arg1;	// IMP=0x00100000000300c8
+ (_Bool)useZoomTransitionForPreviewController:(id)arg1;	// IMP=0x001000000003004e
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000002e8fa
- (void).cxx_destruct;	// IMP=0x0000000000030664
@property struct CGSize previewItemSize; // @synthesize previewItemSize=_previewItemSize;
@property _Bool usingViewForZoomTransition; // @synthesize usingViewForZoomTransition=_usingViewForZoomTransition;
@property double hostNavigationOffset; // @synthesize hostNavigationOffset=_hostNavigationOffset;
@property double topNavigationOffset; // @synthesize topNavigationOffset=_topNavigationOffset;
@property struct CGRect uncroppedFrame; // @synthesize uncroppedFrame=_uncroppedFrame;
@property struct CGAffineTransform sourceTransform; // @synthesize sourceTransform=_sourceTransform;
@property struct CGPoint sourceCenter; // @synthesize sourceCenter=_sourceCenter;
@property struct CGRect sourceBounds; // @synthesize sourceBounds=_sourceBounds;
@property _Bool isSourceTransformed; // @synthesize isSourceTransformed=_isSourceTransformed;
@property struct CGRect sourceFrame; // @synthesize sourceFrame=_sourceFrame;
@property(retain, nonatomic) UIView *sourceViewSnapshot; // @synthesize sourceViewSnapshot=_sourceViewSnapshot;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
- (void)setUpTransitionSourceView;	// IMP=0x000000000002f57d
- (id)initWithQLPreviewController:(id)arg1 containerView:(id)arg2 toViewController:(id)arg3;	// IMP=0x000000000002f038
- (id)sourceViewSnapshotImage;	// IMP=0x000000000002f013
- (void)_snapshotSourceViewIfNeeded;	// IMP=0x000000000002eedf
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002eaed
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002e920
- (void)prepareContextToSend;	// IMP=0x000000000002e902

@end

