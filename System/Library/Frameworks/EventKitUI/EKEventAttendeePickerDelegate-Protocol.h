//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKEventAttendeePicker, NSString;

@protocol EKEventAttendeePickerDelegate <NSObject>
- (unsigned long long)eventAttendeePicker:(EKEventAttendeePicker *)arg1 getValidationStatusForAddress:(NSString *)arg2;
- (void)eventAttendeePicker:(EKEventAttendeePicker *)arg1 cacheValidationStatus:(unsigned long long)arg2 forAddress:(NSString *)arg3;
@end
