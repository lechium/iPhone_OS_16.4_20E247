//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class EKEvent, NSString, WeekViewController;

@protocol WeekViewControllerDelegate <NSObject>
- (void)weekViewController:(WeekViewController *)arg1 didEditEvent:(EKEvent *)arg2 creationMethod:(NSString *)arg3;
- (void)weekViewController:(WeekViewController *)arg1 didSelectEvent:(EKEvent *)arg2;
@end
