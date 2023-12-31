//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSString;

@interface CloudTabGroupSyncEvent : NSObject
{
    NSMutableArray *_childEvents;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSDate *_beginDate;	// 24 = 0x18
    NSDate *_endDate;	// 32 = 0x20
    NSString *_subtitle;	// 40 = 0x28
    NSString *_symbolName;	// 48 = 0x30
    NSDictionary *_metadata;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000006d9c7
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *beginDate; // @synthesize beginDate=_beginDate;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)extraAttributes;	// IMP=0x001000000006d725
- (id)_defaultSubtitle;	// IMP=0x001000000006d5f4
- (void)addChildEvent:(id)arg1;	// IMP=0x001000000006d5de
@property(readonly, copy, nonatomic) NSArray *childEvents;
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x001000000006d340
- (id)init;	// IMP=0x001000000006d327

@end

