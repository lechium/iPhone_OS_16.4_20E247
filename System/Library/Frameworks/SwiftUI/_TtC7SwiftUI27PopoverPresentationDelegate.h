//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7SwiftUI27PopoverPresentationDelegate : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000001363b03
- (id)init;	// IMP=0x0000000001363ac3
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;	// IMP=0x0000000001363a33
- (_Bool)presentationControllerShouldDismiss:(id)arg1;	// IMP=0x00000000013638ed
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(struct CGRect *)arg2 inView:(id *)arg3;	// IMP=0x0000000001363895
- (void)prepareForPopoverPresentation:(id)arg1;	// IMP=0x0000000001363752

@end
