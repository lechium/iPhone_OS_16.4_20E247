//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@protocol CKMacToolbarViewDelegate;

__attribute__((visibility("hidden")))
@interface CKMacToolbarView : UIView
{
    id <CKMacToolbarViewDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000004800ec
@property(nonatomic) __weak id <CKMacToolbarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000047fee9

@end

