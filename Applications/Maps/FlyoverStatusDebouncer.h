//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol StatusDebouncerDelegate;

@interface FlyoverStatusDebouncer : NSObject
{
    NSTimer *_timer;	// 8 = 0x8
    id <StatusDebouncerDelegate> _delegate;	// 16 = 0x10
    unsigned long long _input;	// 24 = 0x18
    unsigned long long _output;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000006347dc
@property(nonatomic) unsigned long long output; // @synthesize output=_output;
@property(nonatomic) unsigned long long input; // @synthesize input=_input;
@property(nonatomic) __weak id <StatusDebouncerDelegate> delegate; // @synthesize delegate=_delegate;
- (double)minimumDurationForOutput:(unsigned long long)arg1;	// IMP=0x0010000000634785
- (void)timerFired:(id)arg1;	// IMP=0x0010000000634754
- (void)updateOutput;	// IMP=0x0010000000634723

@end

