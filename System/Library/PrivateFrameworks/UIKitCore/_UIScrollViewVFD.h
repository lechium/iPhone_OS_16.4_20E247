//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIScrollView, _UIScrollViewFPSHUD;

__attribute__((visibility("hidden")))
@interface _UIScrollViewVFD : NSObject
{
    UIScrollView *_scrollView;	// 8 = 0x8
    _UIScrollViewFPSHUD *_debugOverlay;	// 16 = 0x10
    unsigned int _activeSubreasons;	// 24 = 0x18
    struct _UIUpdateRequest _updateRequest;	// 32 = 0x20
    struct _UIUpdateRequestRecord _updateRecord;	// 64 = 0x40
    struct _UIScrollViewVFDLookupState _lookupState;	// 80 = 0x50
    unsigned long long _displayedPresentationTime;	// 104 = 0x68
    struct CGPoint _displayedOrigin;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000001082e4d
- (void)_updateCompleted;	// IMP=0x0000000001082daa
- (void)dealloc;	// IMP=0x000000000108274e

@end

