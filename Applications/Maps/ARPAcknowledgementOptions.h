//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ARPAcknowledgementOptions : NSObject
{
    NSString *_primaryButtonTitle;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_message;	// 24 = 0x18
}

+ (id)defaultOptions;	// IMP=0x0020000000502bb6
- (void).cxx_destruct;	// IMP=0x0020000000502ecd
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *primaryButtonTitle; // @synthesize primaryButtonTitle=_primaryButtonTitle;
@property(readonly, nonatomic) long long acknowledgementOptionsType;
@property(nonatomic) _Bool showsInternalStatusLink;
@property(nonatomic) double timeToAutomaticDismissal;
@property(readonly, nonatomic) _Bool shouldDismissAutomatically;
- (id)_defaultMessage;	// IMP=0x0010000000502df1
- (id)_defaultTitle;	// IMP=0x0010000000502c73
- (id)init;	// IMP=0x0010000000502bcf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
