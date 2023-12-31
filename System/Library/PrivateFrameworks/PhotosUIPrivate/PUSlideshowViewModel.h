//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUViewModel.h"

__attribute__((visibility("hidden")))
@interface PUSlideshowViewModel : PUViewModel
{
    _Bool _wantsChromeVisible;	// 8 = 0x8
    long long _currentState;	// 16 = 0x10
}

@property(nonatomic, setter=setWantsChromeVisible:) _Bool wantsChromeVisible; // @synthesize wantsChromeVisible=_wantsChromeVisible;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
- (void)setWantsChromeVisible:(_Bool)arg1 changeReason:(long long)arg2;	// IMP=0x0000000000480e42
- (void)unregisterChangeObserver:(id)arg1;	// IMP=0x0000000000480da7
- (void)registerChangeObserver:(id)arg1;	// IMP=0x0000000000480d78
- (id)currentChange;	// IMP=0x0000000000480d31
- (id)newViewModelChange;	// IMP=0x0000000000480d20

@end

