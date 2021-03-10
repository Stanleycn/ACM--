package com.only.mapreduce.wordcount;

import org.apache.hadoop.io.IntWritable;
import org.apache.hadoop.io.LongWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapreduce.Mapper;

import java.io.IOException;


public class WordcountMapper extends Mapper<LongWritable, org.w3c.dom.Text, org.w3c.dom.Text,IntWritable> {
    Text k=new Text();
    intWritable v=new Intwritable(1);
    @Override
    protected  void map(LongWritable key,Text value,Context context) throws IOException,InterruptedException{

        //获取一行
        String line =value.toString();
        //2 切割
        String[] words=line.split(" ");
        //3 输出
        for(String word:words){
            k.set(word);
            context.write(k,v);
        }
    }
}




package com.only.mapreduce.wordcount;

import org.apache.hadoop.io.IntWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapreduce.Reducer;

import java.io.IOException;

public class WordcountReducer extends Reducer<Text,IntWritable,Text,IntWritable>{
    int sum;
    IntWritable v=new IntWritable();
    @Override
        protected void reduce(Text key,Iterable<IntWritable> values,Context context) throws IOException,InterruptedException{
        sum=0;
        for(IntWritable count:values){
            sum+=count.get();
        }
        v.set(sum);
        context.write(key,v);
    }
}



import org.apache.hadoop.io.IntWritable;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.lib.input.FileInputFormat;
import org.apache.hadoop.mapreduce.lib.output.FileOutputFormat;
import java.io.IOException;
import java.lang.module.Configuration;

public class WordcountDriver{
    public static void main(String[] args) throws IOException,ClassNotFoundException,InterruptedException{
        Configuration configuration=new Configuration();
        Job job=Job.getInstance(configuration);
        job.setJarByClass(WordcountDriver.class);

        job.setMapperClass(WordcountMapper.class);
        job.setReducerClass(WordcountReducer.class);

        job.setMapOutputKeyClass(Text.class);
        job.setMapOutputValueClass(IntWritable.class);

        job.setOutputKeyClass(Text.class);
        job.setOutputValueClass(IntWritable.class);

        FileInputFormat.setInputPaths(job,new Path(args[0]));
        FileOutputFormat.setOutputPath(job,new Path(args[1]));

        boolean result=job.waitForCompletion(true);
        System.exit(result?0:1);
    }
}




class Scratch {
    public static void main(String[] args) {
        
    }
}



log4j.rootLogger=INFO, stdout
log4j.appender.stdout=org.apache.log4j.ConsoleAppender
log4j.appender.stdout.layout=org.apache.log4j.PatternLayout
log4j.appender.stdout.layout.ConversionPattern=%d %p [%c] - %m%n
log4j.appender.logfile=org.apache.log4j.FileAppender
log4j.appender.logfile.File=target/spring.log
log4j.appender.logfile.layout=org.apache.log4j.PatternLayout
log4j.appender.logfile.layout.ConversionPattern=%d  %p  [%c]  -%m%n


<dependencies>
    <dependency>
        <groupId>junit</groupId>
        <artifactId>junit</artifactId>
        <version>RELEASE</version>
    </dependency>

    <dependency>
        <groupId>org.apache.logging.log4j</groupId>
        <artifactId>log4j-core</artifactId>
        <version>2.8.2</version>
    </dependency>

    <dependency>
        <groupId>org.apache.hadoop</groupId>
        <artifactId>hadoop-common</artifactId>
        <version>2.7.2</version>
    </dependency>

    <dependency>
        <groupId>org.apache.hadoop</groupId>
        <artifactId>hadoop-client</artifactId>
        <version>2.7.2</version>
    </dependency>

    <dependency>
        <groupId>org.apache.hadoop</groupId>
        <artifactId>hadoop-hdfs</artifactId>
        <version>2.7.2</version>
    </dependency>
</dependencies>
