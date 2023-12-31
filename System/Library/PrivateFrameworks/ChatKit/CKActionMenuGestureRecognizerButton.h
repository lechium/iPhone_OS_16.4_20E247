//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKActionMenuGestureRecognizer, NSDate, UIButton;
@protocol CKActionMenuGestureRecognizerButtonDelegate;

__attribute__((visibility("hidden")))
@interface CKActionMenuGestureRecognizerButton : NSObject
{
    CKActionMenuGestureRecognizer *_gestureRecognizer;	// 8 = 0x8
    UIButton *_button;	// 16 = 0x10
    id <CKActionMenuGestureRecognizerButtonDelegate> _delegate;	// 24 = 0x18
    NSDate *_gestureDidBeginDate;	// 32 = 0x20
}

+ (id)actionMenuGestureRecognizerButtonWithButton:(id)arg1;	// IMP=0x0060000000025db2
- (void).cxx_destruct;	// IMP=0x0000000000026304
@property(retain, nonatomic) NSDate *gestureDidBeginDate; // @synthesize gestureDidBeginDate=_gestureDidBeginDate;
@property(nonatomic) __weak id <CKActionMenuGestureRecognizerButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) CKActionMenuGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (void)gestureRecognized:(id)arg1;	// IMP=0x0000000000026071
- (void)touchUpOutsideButton:(id)arg1;	// IMP=0x000000000002600e
- (void)touchUpInsideButton:(id)arg1;	// IMP=0x0000000000025fa2
- (void)touchDownButton:(id)arg1;	// IMP=0x0000000000025f56
- (id)initWithGestureRecognizer:(id)arg1 button:(id)arg2;	// IMP=0x0000000000025e37

@end

