//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIBarButtonItem, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface SKUIContextActionsPresentationSource : NSObject
{
    UIViewController *_viewController;	// 8 = 0x8
    UIView *_sourceView;	// 16 = 0x10
    UIBarButtonItem *_barButtonItem;	// 24 = 0x18
    struct CGRect _sourceRect;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000373cc7
@property(retain, nonatomic) UIBarButtonItem *barButtonItem; // @synthesize barButtonItem=_barButtonItem;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)presentViewController:(id)arg1 permittedArrowDirections:(unsigned long long)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000373854
- (id)initWithViewController:(id)arg1;	// IMP=0x00000000003737e9

@end
