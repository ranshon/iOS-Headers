/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSKCommand.h>

// Not exported
@interface TSCHSynchronousCommand : TSKCommand
{
    TSKCommand *mCommand;
}

- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)coalesceWithCommand:(id)arg1;
- (_Bool)canCoalesceWithCommand:(id)arg1;
- (void)redo;
- (void)undo;
- (void)commit;
- (_Bool)process;
- (_Bool)shouldRunSynchronously;
- (void)dealloc;
- (id)initWithCommand:(id)arg1;

@end

