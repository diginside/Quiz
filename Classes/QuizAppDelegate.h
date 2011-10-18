//
//  QuizAppDelegate.h
//  Quiz
//
//  Created by Hong Wang on 10/15/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QuizAppDelegate : NSObject <UIApplicationDelegate> {
    //UIWindow *window;
	int questionIndex;
	
	NSMutableArray *questions;
	NSMutableArray *answers;
	
	IBOutlet UILabel *questionField;
	IBOutlet UILabel *answerField;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

- (IBAction)showQuestion : (id)sender;
- (IBAction)showAnswer : (id)sender;

@end

