//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RichMapsActivity;

@interface RichMapsActivityCreatingTaskImpl : NSObject
{
    CDUnknownBlockType _completion;	// 8 = 0x8
    RichMapsActivity *_computedRichMapsActivity;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000e74f4
@property(readonly, nonatomic) RichMapsActivity *computedRichMapsActivity; // @synthesize computedRichMapsActivity=_computedRichMapsActivity;
- (void)taskFailed;	// IMP=0x00100000000e7434
- (void)taskFinished:(id)arg1;	// IMP=0x00100000000e7354
- (void)taskStarted;	// IMP=0x00100000000e72c0
- (void)cancelTask;	// IMP=0x00100000000e72ba
- (void)performTask;	// IMP=0x00100000000e72b4
- (void)performTaskWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e7275
- (id)description;	// IMP=0x00100000000e71d2

@end
