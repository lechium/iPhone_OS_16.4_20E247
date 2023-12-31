//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSOrderedSet, NSString;

__attribute__((visibility("hidden")))
@interface HistoryTableViewDataSourceSession : NSObject
{
    NSString *_sessionIdentifier;	// 8 = 0x8
    NSDate *_sessionDate;	// 16 = 0x10
    NSOrderedSet *_historyItems;	// 24 = 0x18
}

+ (id)sessionWithDate:(id)arg1;	// IMP=0x006000000014094f
- (void).cxx_destruct;	// IMP=0x0000000000140bd2
@property(copy, nonatomic) NSOrderedSet *historyItems; // @synthesize historyItems=_historyItems;
@property(readonly, nonatomic) NSDate *sessionDate; // @synthesize sessionDate=_sessionDate;
@property(readonly, nonatomic) NSString *sessionIdentifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000140aa9
- (unsigned long long)hash;	// IMP=0x0000000000140a65
- (id)initWithDate:(id)arg1;	// IMP=0x000000000014099c

@end

