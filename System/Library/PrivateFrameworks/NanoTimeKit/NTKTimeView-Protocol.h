//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKit/NSObject-Protocol.h>

@class NSDate;

@protocol NTKTimeView <NSObject>
@property(nonatomic, getter=isFrozen) _Bool frozen;
- (void)setTimeOffset:(double)arg1;
- (void)setOverrideDate:(NSDate *)arg1 duration:(double)arg2;
@end

