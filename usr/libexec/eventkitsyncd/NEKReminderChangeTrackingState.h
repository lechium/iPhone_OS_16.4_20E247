//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class REMChangeToken, REMChangeTracking;

@interface NEKReminderChangeTrackingState : NSObject
{
    REMChangeTracking *_changeTracking;	// 8 = 0x8
    REMChangeToken *_lastChangeToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000006eae9
@property(retain, nonatomic) REMChangeToken *lastChangeToken; // @synthesize lastChangeToken=_lastChangeToken;
@property(retain, nonatomic) REMChangeTracking *changeTracking; // @synthesize changeTracking=_changeTracking;
- (id)description;	// IMP=0x001000000006e9fd
- (id)initWithChangeTracking:(id)arg1 lastChangeToken:(id)arg2;	// IMP=0x001000000006e95f
- (id)init;	// IMP=0x001000000006e951

@end
