//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC8Freeform34CRLDocumentSessionAnalyticsManager : NSObject
{
    MISSING_TYPE *documentSessionEndedAnalyticsDomain;	// 8 = 0x8
    MISSING_TYPE *totalEventKeyCount;	// 24 = 0x18
    MISSING_TYPE *durationKey;	// 32 = 0x20
    MISSING_TYPE *hadEditKey;	// 48 = 0x30
    MISSING_TYPE *percentageTimeSpentInEditModeKey;	// 64 = 0x40
    MISSING_TYPE *editModeBeganCountKey;	// 80 = 0x50
    MISSING_TYPE *commandControllerNotificationSubscriber;	// 96 = 0x60
    MISSING_TYPE *sessionBeganDate;	// 0 = 0x0
    MISSING_TYPE *hadEdit;	// 0 = 0x0
    MISSING_TYPE *currentMode;	// 0 = 0x0
    MISSING_TYPE *modeBeganDate;	// 0 = 0x0
    MISSING_TYPE *timeSpentInEditMode;	// 0 = 0x0
    MISSING_TYPE *editModeBeganCount;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0040000000898000
- (id)init;	// IMP=0x0010000000897fa0
- (void)endSession:(id)arg1;	// IMP=0x0010000000897ed0
- (void)beginSession:(id)arg1;	// IMP=0x0010000000897e50
- (void)endSessionClosingDocument:(_Bool)arg1;	// IMP=0x00100000008977f0
- (void)beginSession;	// IMP=0x0010000000897540
- (void)observeCommandController:(id)arg1;	// IMP=0x00100000008972c0
- (id)initWithScene:(id)arg1 commandController:(id)arg2 mode:(id)arg3;	// IMP=0x0010000000897270

@end
