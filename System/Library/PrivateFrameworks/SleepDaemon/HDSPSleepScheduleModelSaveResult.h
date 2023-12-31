//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDSPSleepScheduleModelChangeEvaluation, NSError;

__attribute__((visibility("hidden")))
@interface HDSPSleepScheduleModelSaveResult : NSObject
{
    _Bool _success;	// 8 = 0x8
    _Bool _shouldNotify;	// 9 = 0x9
    HDSPSleepScheduleModelChangeEvaluation *_changeEvaluation;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
}

+ (id)saveFailedWithError:(id)arg1;	// IMP=0x006000000006a767
+ (id)emptyResult;	// IMP=0x006000000006a6f9
- (void).cxx_destruct;	// IMP=0x000000000006a8ce
@property(readonly, nonatomic) _Bool shouldNotify; // @synthesize shouldNotify=_shouldNotify;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) HDSPSleepScheduleModelChangeEvaluation *changeEvaluation; // @synthesize changeEvaluation=_changeEvaluation;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
- (id)initWithSuccess:(_Bool)arg1 changeEvaluation:(id)arg2 error:(id)arg3 shouldNotify:(_Bool)arg4;	// IMP=0x000000000006a7ed

@end

