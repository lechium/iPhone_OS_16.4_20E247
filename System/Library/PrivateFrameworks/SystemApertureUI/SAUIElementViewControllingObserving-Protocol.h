//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SystemApertureUI/NSObject-Protocol.h>

@protocol SAUIElementViewControlling;

@protocol SAUIElementViewControllingObserving <NSObject>

@optional
- (void)elementViewControllingDidDisappear:(id <SAUIElementViewControlling>)arg1;
- (void)elementViewControllingWillDisappear:(id <SAUIElementViewControlling>)arg1;
- (void)elementViewControllingDidAppear:(id <SAUIElementViewControlling>)arg1;
- (void)elementViewControllingWillAppear:(id <SAUIElementViewControlling>)arg1;
@end

